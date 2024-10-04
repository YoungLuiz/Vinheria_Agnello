# Vinheria_Agnello
<p>Este repositório contém o código-fonte e o projeto do Wokwi para o desafio do CP1, que consistem em criar um sistema de IoT usando o Arduino. O objetivo é monitorar luminosidadede um ambiente e emitir um alerta sonoro caso necessário.</p>

<h1>Projeto com Arduino</h1>
<span>Este projeto se trata de um sistema de monitoramento de luminosidade para armazenamentos. O sistema possui três estágios:</span>
<ul>
<li>Nível OK: Um led verde fica aceso indicando normalidade;</li>
<li>Nível Alerta: Um led amarelo fica aceso e emite alertas sonoros a cada 3s;</li>
<li>Nível Crítico: Um led vermelho fica aceso e emite um alerta sonoro constante;</li>
</ul>
<p>Os componentes necessários para a reprodução deste projeto estão listadas abaixo:
<ul>
  <li>1 Arduino</li>
  <li>1 ProtoBoard</li>
  <li>3 Leds (1 Verde, 1 Amarela, 1 Vermelha)</li>
  <li>4 Resistores de 220Ω</li>
  <li>1 Sensor LDR</li>
  <li>1 Buzzer</li>
</ul>
</p>
<span>Abaixo temos o esquema de conexão dos componentes com a placa Arduino UNO:</span>
<ul>
    <li>Led Vermelho = Pin 4</li>
    <li>Led Amarelo = Pin 3</li>
    <li>Led Verde = Pin 2</li>
    <li>Sensor LDR = Pin - A0</li>
      <span>VCC: Pin - 5V</span>
    <li>Buzzer = Pin 5</li>
      <span>Pin: GND</span>
  </ul>
  <p><span><a href="https://wokwi.com/projects/410679136980509697">Acesso ao Projeto no WokWi</a></span></p>
  <p><img src="/images/1.png"></a></p>
  <span>Para alterar os parametros do sistema, basta alterar as variaveis "limiteOK" e "limiteAlerta".</span>
<h3>Participantes do Grupo</h3>
  <ul>
    <li>Arthur Gomes - RM:560771</li>
    <li>Lucas Villar - RM: 560005</li>
    <li>Luiz Gustavo - RM: 560110</li>
    <li>Matheus Siroma - RM: 560248</li>
    <li>Pedro Estevam - RM: 560642</li>
  </ul>
